
%=====================================================
% FileName: ConvertWeights_MAT_to_HPP.m
% Designer: Zhe
% Modified: 10/07/2021
% Describe: This Matlab script converts 16-bit weights (MAT format)
% into floating point (HPP format, readable for C code of LSTM inference).
%==========================================================================

clear variables;

load('delta_20Hz_weights.mat');

% This parameter needs to be same as that in C code of the LSTM inference.
SCALER = 4096;

fileID = fopen('weight_1.hpp', 'w');

for i = 1:146
    fprintf(fileID, '%f\n', new_weights(i) / SCALER);
end

fclose(fileID);