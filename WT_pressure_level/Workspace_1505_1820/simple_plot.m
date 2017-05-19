clc; clear all; close all;
%%

data_wt = load('wt.mat');
data_pump = load('pump.mat');
data_ref = load('Pump_ref.mat');

figure
plot(data_wt.wt_pressure(1,:),data_wt.wt_pressure(2,:))
grid on
title('Water tower pressure - steady state')
xlabel('Time [s]')
ylabel('Pressure [Bar]')

figure
plot(data_pump.pump_pressure(1,:),data_pump.pump_pressure(2,:),data_pump.pump_pressure(1,:),data_pump.pump_pressure(3,:),data_pump.pump_pressure(1,:),data_pump.pump_pressure(4,:),data_pump.pump_pressure(1,:),data_pump.pump_pressure(5,:))
legend('C2','C16','18','25')
title('Differential pressure over pumps - steady state')
%hold on 
%plot(data_ref.wt_pressure(1,:),data_ref.wt_pressure(2,:),data_ref.wt_pressure(1,:),data_ref.wt_pressure(3,:),data_ref.wt_pressure(1,:),data_ref.wt_pressure(4,:),data_ref.wt_pressure(1,:),data_ref.wt_pressure(5,:))
%legend('Reference C2','Reference C16','Reference C18','Reference C25')
xlabel('Time [s]')
ylabel('Differential pressure [Bar]')

p_c2 = mean(data_pump.pump_pressure(2,20000:length(data_pump.pump_pressure)))
p_c16 = mean(data_pump.pump_pressure(3,20000:length(data_pump.pump_pressure)))
p_c18 = mean(data_pump.pump_pressure(4,20000:length(data_pump.pump_pressure)))
p_c25 = mean(data_pump.pump_pressure(5,20000:length(data_pump.pump_pressure)))

