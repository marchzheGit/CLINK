-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity lstm_kernel_lut_sigmoid_rom is 
    generic(
             DWIDTH     : integer := 12; 
             AWIDTH     : integer := 10; 
             MEM_SIZE    : integer := 1024
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of lstm_kernel_lut_sigmoid_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "100000000000", 1 => "100000001000", 2 => "100000010000", 
    3 => "100000011000", 4 => "100000100000", 5 => "100000101000", 
    6 => "100000110000", 7 => "100000111000", 8 => "100001000000", 
    9 => "100001001000", 10 => "100001010000", 11 => "100001011000", 
    12 => "100001100000", 13 => "100001101000", 14 => "100001110000", 
    15 => "100001111000", 16 => "100010000000", 17 => "100010001000", 
    18 => "100010010000", 19 => "100010011000", 20 => "100010100000", 
    21 => "100010101000", 22 => "100010110000", 23 => "100010111000", 
    24 => "100010111111", 25 => "100011000111", 26 => "100011001111", 
    27 => "100011010111", 28 => "100011011111", 29 => "100011100111", 
    30 => "100011101111", 31 => "100011110111", 32 => "100011111111", 
    33 => "100100000111", 34 => "100100001110", 35 => "100100010110", 
    36 => "100100011110", 37 => "100100100110", 38 => "100100101110", 
    39 => "100100110110", 40 => "100100111101", 41 => "100101000101", 
    42 => "100101001101", 43 => "100101010101", 44 => "100101011101", 
    45 => "100101100100", 46 => "100101101100", 47 => "100101110100", 
    48 => "100101111100", 49 => "100110000011", 50 => "100110001011", 
    51 => "100110010011", 52 => "100110011010", 53 => "100110100010", 
    54 => "100110101010", 55 => "100110110001", 56 => "100110111001", 
    57 => "100111000001", 58 => "100111001000", 59 => "100111010000", 
    60 => "100111010111", 61 => "100111011111", 62 => "100111100111", 
    63 => "100111101110", 64 => "100111110110", 65 => "100111111101", 
    66 => "101000000101", 67 => "101000001100", 68 => "101000010100", 
    69 => "101000011011", 70 => "101000100010", 71 => "101000101010", 
    72 => "101000110001", 73 => "101000111001", 74 => "101001000000", 
    75 => "101001000111", 76 => "101001001111", 77 => "101001010110", 
    78 => "101001011101", 79 => "101001100101", 80 => "101001101100", 
    81 => "101001110011", 82 => "101001111010", 83 => "101010000010", 
    84 => "101010001001", 85 => "101010010000", 86 => "101010010111", 
    87 => "101010011110", 88 => "101010100110", 89 => "101010101101", 
    90 => "101010110100", 91 => "101010111011", 92 => "101011000010", 
    93 => "101011001001", 94 => "101011010000", 95 => "101011010111", 
    96 => "101011011110", 97 => "101011100101", 98 => "101011101100", 
    99 => "101011110011", 100 => "101011111010", 101 => "101100000001", 
    102 => "101100000111", 103 => "101100001110", 104 => "101100010101", 
    105 => "101100011100", 106 => "101100100011", 107 => "101100101001", 
    108 => "101100110000", 109 => "101100110111", 110 => "101100111110", 
    111 => "101101000100", 112 => "101101001011", 113 => "101101010010", 
    114 => "101101011000", 115 => "101101011111", 116 => "101101100101", 
    117 => "101101101100", 118 => "101101110010", 119 => "101101111001", 
    120 => "101101111111", 121 => "101110000110", 122 => "101110001100", 
    123 => "101110010011", 124 => "101110011001", 125 => "101110011111", 
    126 => "101110100110", 127 => "101110101100", 128 => "101110110010", 
    129 => "101110111001", 130 => "101110111111", 131 => "101111000101", 
    132 => "101111001011", 133 => "101111010010", 134 => "101111011000", 
    135 => "101111011110", 136 => "101111100100", 137 => "101111101010", 
    138 => "101111110000", 139 => "101111110110", 140 => "101111111100", 
    141 => "110000000010", 142 => "110000001000", 143 => "110000001110", 
    144 => "110000010100", 145 => "110000011010", 146 => "110000100000", 
    147 => "110000100110", 148 => "110000101100", 149 => "110000110001", 
    150 => "110000110111", 151 => "110000111101", 152 => "110001000011", 
    153 => "110001001000", 154 => "110001001110", 155 => "110001010100", 
    156 => "110001011001", 157 => "110001011111", 158 => "110001100101", 
    159 => "110001101010", 160 => "110001110000", 161 => "110001110101", 
    162 => "110001111011", 163 => "110010000000", 164 => "110010000110", 
    165 => "110010001011", 166 => "110010010001", 167 => "110010010110", 
    168 => "110010011011", 169 => "110010100001", 170 => "110010100110", 
    171 => "110010101011", 172 => "110010110001", 173 => "110010110110", 
    174 => "110010111011", 175 => "110011000000", 176 => "110011000101", 
    177 => "110011001011", 178 => "110011010000", 179 => "110011010101", 
    180 => "110011011010", 181 => "110011011111", 182 => "110011100100", 
    183 => "110011101001", 184 => "110011101110", 185 => "110011110011", 
    186 => "110011111000", 187 => "110011111101", 188 => "110100000010", 
    189 => "110100000110", 190 => "110100001011", 191 => "110100010000", 
    192 => "110100010101", 193 => "110100011010", 194 => "110100011110", 
    195 => "110100100011", 196 => "110100101000", 197 => "110100101100", 
    198 => "110100110001", 199 => "110100110110", 200 => "110100111010", 
    201 => "110100111111", 202 => "110101000011", 203 => "110101001000", 
    204 => "110101001100", 205 => "110101010001", 206 => "110101010101", 
    207 => "110101011010", 208 => "110101011110", 209 => "110101100011", 
    210 => "110101100111", 211 => "110101101011", 212 => "110101110000", 
    213 => "110101110100", 214 => "110101111000", 215 => "110101111100", 
    216 => "110110000001", 217 => "110110000101", 218 => "110110001001", 
    219 => "110110001101", 220 => "110110010001", 221 => "110110010101", 
    222 => "110110011001", 223 => "110110011110", 224 => "110110100010", 
    225 => "110110100110", 226 => "110110101010", 227 => "110110101110", 
    228 => "110110110010", 229 => "110110110110", 230 => "110110111001", 
    231 => "110110111101", 232 => "110111000001", 233 => "110111000101", 
    234 => "110111001001", 235 => "110111001101", 236 => "110111010000", 
    237 => "110111010100", 238 => "110111011000", 239 => "110111011100", 
    240 => "110111011111", 241 => "110111100011", 242 => "110111100111", 
    243 => "110111101010", 244 => "110111101110", 245 => "110111110010", 
    246 => "110111110101", 247 => "110111111001", 248 => "110111111100", 
    249 => "111000000000", 250 => "111000000011", 251 => "111000000111", 
    252 => "111000001010", 253 => "111000001110", 254 => "111000010001", 
    255 => "111000010100", 256 => "111000011000", 257 => "111000011011", 
    258 => "111000011110", 259 => "111000100010", 260 => "111000100101", 
    261 => "111000101000", 262 => "111000101100", 263 => "111000101111", 
    264 => "111000110010", 265 => "111000110101", 266 => "111000111000", 
    267 => "111000111100", 268 => "111000111111", 269 => "111001000010", 
    270 => "111001000101", 271 => "111001001000", 272 => "111001001011", 
    273 => "111001001110", 274 => "111001010001", 275 => "111001010100", 
    276 => "111001010111", 277 => "111001011010", 278 => "111001011101", 
    279 => "111001100000", 280 => "111001100011", 281 => "111001100110", 
    282 => "111001101001", 283 => "111001101011", 284 => "111001101110", 
    285 => "111001110001", 286 => "111001110100", 287 => "111001110111", 
    288 => "111001111001", 289 => "111001111100", 290 => "111001111111", 
    291 => "111010000010", 292 => "111010000100", 293 => "111010000111", 
    294 => "111010001010", 295 => "111010001100", 296 => "111010001111", 
    297 => "111010010010", 298 => "111010010100", 299 => "111010010111", 
    300 => "111010011001", 301 => "111010011100", 302 => "111010011110", 
    303 => "111010100001", 304 => "111010100011", 305 => "111010100110", 
    306 => "111010101000", 307 => "111010101011", 308 => "111010101101", 
    309 => "111010110000", 310 => "111010110010", 311 => "111010110100", 
    312 => "111010110111", 313 => "111010111001", 314 => "111010111100", 
    315 => "111010111110", 316 => "111011000000", 317 => "111011000010", 
    318 => "111011000101", 319 => "111011000111", 320 => "111011001001", 
    321 => "111011001100", 322 => "111011001110", 323 => "111011010000", 
    324 => "111011010010", 325 => "111011010100", 326 => "111011010110", 
    327 => "111011011001", 328 => "111011011011", 329 => "111011011101", 
    330 => "111011011111", 331 => "111011100001", 332 => "111011100011", 
    333 => "111011100101", 334 => "111011100111", 335 => "111011101001", 
    336 => "111011101011", 337 => "111011101101", 338 => "111011101111", 
    339 => "111011110001", 340 => "111011110011", 341 => "111011110101", 
    342 => "111011110111", 343 => "111011111001", 344 => "111011111011", 
    345 => "111011111101", 346 => "111011111111", 347 => "111100000001", 
    348 => "111100000011", 349 => "111100000100", 350 => "111100000110", 
    351 => "111100001000", 352 => "111100001010", 353 => "111100001100", 
    354 => "111100001101", 355 => "111100001111", 356 => "111100010001", 
    357 => "111100010011", 358 => "111100010101", 359 => "111100010110", 
    360 => "111100011000", 361 => "111100011010", 362 => "111100011011", 
    363 => "111100011101", 364 => "111100011111", 365 => "111100100000", 
    366 => "111100100010", 367 => "111100100100", 368 => "111100100101", 
    369 => "111100100111", 370 => "111100101000", 371 => "111100101010", 
    372 => "111100101100", 373 => "111100101101", 374 => "111100101111", 
    375 => "111100110000", 376 => "111100110010", 377 => "111100110011", 
    378 => "111100110101", 379 => "111100110110", 380 => "111100111000", 
    381 => "111100111001", 382 => "111100111011", 383 => "111100111100", 
    384 => "111100111110", 385 => "111100111111", 386 => "111101000001", 
    387 => "111101000010", 388 => "111101000011", 389 => "111101000101", 
    390 => "111101000110", 391 => "111101001000", 392 => "111101001001", 
    393 => "111101001010", 394 => "111101001100", 395 => "111101001101", 
    396 => "111101001110", 397 => "111101010000", 398 => "111101010001", 
    399 => "111101010010", 400 => "111101010100", 401 => "111101010101", 
    402 => "111101010110", 403 => "111101010111", 404 => "111101011001", 
    405 => "111101011010", 406 => "111101011011", 407 => "111101011100", 
    408 => "111101011110", 409 => "111101011111", 410 => "111101100000", 
    411 => "111101100001", 412 => "111101100010", 413 => "111101100100", 
    414 => "111101100101", 415 => "111101100110", 416 => "111101100111", 
    417 => "111101101000", 418 => "111101101001", 419 => "111101101011", 
    420 => "111101101100", 421 => "111101101101", 422 => "111101101110", 
    423 => "111101101111", 424 => "111101110000", 425 => "111101110001", 
    426 => "111101110010", 427 => "111101110011", 428 => "111101110100", 
    429 => "111101110101", 430 => "111101110110", 431 => "111101110111", 
    432 => "111101111000", 433 => "111101111001", 434 => "111101111011", 
    435 => "111101111100", 436 => "111101111101", 437 to 438=> "111101111110", 
    439 => "111101111111", 440 => "111110000000", 441 => "111110000001", 
    442 => "111110000010", 443 => "111110000011", 444 => "111110000100", 
    445 => "111110000101", 446 => "111110000110", 447 => "111110000111", 
    448 => "111110001000", 449 => "111110001001", 450 => "111110001010", 
    451 => "111110001011", 452 to 453=> "111110001100", 454 => "111110001101", 
    455 => "111110001110", 456 => "111110001111", 457 => "111110010000", 
    458 => "111110010001", 459 to 460=> "111110010010", 461 => "111110010011", 
    462 => "111110010100", 463 => "111110010101", 464 to 465=> "111110010110", 
    466 => "111110010111", 467 => "111110011000", 468 => "111110011001", 
    469 to 470=> "111110011010", 471 => "111110011011", 472 => "111110011100", 
    473 to 474=> "111110011101", 475 => "111110011110", 476 => "111110011111", 
    477 to 478=> "111110100000", 479 => "111110100001", 480 => "111110100010", 
    481 to 482=> "111110100011", 483 => "111110100100", 484 to 485=> "111110100101", 
    486 => "111110100110", 487 to 488=> "111110100111", 489 => "111110101000", 
    490 to 491=> "111110101001", 492 => "111110101010", 493 to 494=> "111110101011", 
    495 => "111110101100", 496 to 497=> "111110101101", 498 => "111110101110", 
    499 to 500=> "111110101111", 501 to 502=> "111110110000", 503 => "111110110001", 
    504 to 505=> "111110110010", 506 to 507=> "111110110011", 508 => "111110110100", 
    509 to 510=> "111110110101", 511 to 512=> "111110110110", 513 to 514=> "111110110111", 
    515 => "111110111000", 516 to 517=> "111110111001", 518 to 519=> "111110111010", 
    520 to 521=> "111110111011", 522 to 523=> "111110111100", 524 to 525=> "111110111101", 
    526 to 527=> "111110111110", 528 to 529=> "111110111111", 530 to 531=> "111111000000", 
    532 to 533=> "111111000001", 534 to 535=> "111111000010", 536 to 537=> "111111000011", 
    538 to 539=> "111111000100", 540 to 541=> "111111000101", 542 to 544=> "111111000110", 
    545 to 546=> "111111000111", 547 to 548=> "111111001000", 549 to 551=> "111111001001", 
    552 to 553=> "111111001010", 554 to 556=> "111111001011", 557 to 558=> "111111001100", 
    559 to 561=> "111111001101", 562 to 563=> "111111001110", 564 to 566=> "111111001111", 
    567 to 569=> "111111010000", 570 to 571=> "111111010001", 572 to 574=> "111111010010", 
    575 to 577=> "111111010011", 578 to 580=> "111111010100", 581 to 583=> "111111010101", 
    584 to 586=> "111111010110", 587 to 589=> "111111010111", 590 to 592=> "111111011000", 
    593 to 596=> "111111011001", 597 to 599=> "111111011010", 600 to 603=> "111111011011", 
    604 to 606=> "111111011100", 607 to 610=> "111111011101", 611 to 614=> "111111011110", 
    615 to 618=> "111111011111", 619 to 622=> "111111100000", 623 to 626=> "111111100001", 
    627 to 630=> "111111100010", 631 to 634=> "111111100011", 635 to 639=> "111111100100", 
    640 to 644=> "111111100101", 645 to 649=> "111111100110", 650 to 654=> "111111100111", 
    655 to 659=> "111111101000", 660 to 665=> "111111101001", 666 to 671=> "111111101010", 
    672 to 677=> "111111101011", 678 to 683=> "111111101100", 684 to 690=> "111111101101", 
    691 to 697=> "111111101110", 698 to 705=> "111111101111", 706 to 713=> "111111110000", 
    714 to 721=> "111111110001", 722 to 731=> "111111110010", 732 to 740=> "111111110011", 
    741 to 751=> "111111110100", 752 to 763=> "111111110101", 764 to 776=> "111111110110", 
    777 to 790=> "111111110111", 791 to 806=> "111111111000", 807 to 824=> "111111111001", 
    825 to 846=> "111111111010", 847 to 872=> "111111111011", 873 to 904=> "111111111100", 
    905 to 947=> "111111111101", 948 to 1012=> "111111111110", 1013 to 1023=> "111111111111" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity lstm_kernel_lut_sigmoid is
    generic (
        DataWidth : INTEGER := 12;
        AddressRange : INTEGER := 1024;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of lstm_kernel_lut_sigmoid is
    component lstm_kernel_lut_sigmoid_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lstm_kernel_lut_sigmoid_rom_U :  component lstm_kernel_lut_sigmoid_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

