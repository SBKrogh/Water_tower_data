clc; clear all; close all;

%% This script is to concatenate the long test data from the water system at AAU.
% The data is gathred in a matrix from which the system is to be modeled
% from.

%% Disgard from time 
time = 36000; % 1800 seconds = 1800/0.05 = 36000

%% Load data

data_pma = load('pma.mat');
data_pump = load('pump.mat');
data_pump_real = load('pump_real.mat');
data_pump_ref = load('pump_ref');
data_ring = load('ring.mat');
data_valve = load('valve.mat');
data_wss = load('wss_system_.mat');
data_wt = load('wt.mat');

%% Necessary data
% This disgard the time vector - sample time 0.05 seconds

OD = data_valve.valve_OD(2:5,:) - 0.7;
pump(1,:) = data_pump.pump_pressure(2,:) - 0.2;
pump(2,:) = data_pump.pump_pressure(3,:) - 0.2;
pump(3,:) = data_pump.pump_pressure(4,:) - 0.1;
pump(4,:) = data_pump.pump_pressure(5,:) - 0.25;

U = [OD',pump'];
U = U(time:end,:);

% n11 = 0.1385, n10 = 0.1562, n16 = 0.1221, n15 = 0.0991
pma(1,:) = data_pma.pma_pressure(2,:) - 0.1385;
pma(2,:) = data_pma.pma_pressure(3,:) - 0.1562;
pma(3,:) = data_pma.pma_pressure(4,:) - 0.1221;
pma(4,:) = data_pma.pma_pressure(5,:) - 0.0991;
wt = data_wt.wt_pressure(2,:) - 0.1281;

y = [pma',wt'];
y = y(time:end,:);

save('parameter_data.mat','U','y');
