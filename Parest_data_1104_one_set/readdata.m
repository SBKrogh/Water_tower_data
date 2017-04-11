%% %extraxt from struct  --**-- all valves open --**--

clc
clear all

Ts = 0.05;
SS = 25;
N = SS/Ts;
M = 3199; %(M+1) = number of sampels pr steadystate wanted 
u = [];
y = [];

for k = 1:1
    
filename = sprintf('%d',k);  

% Import the file
newData1 = load('-mat', filename);

% Create new variables in the base workspace from those fields.
vars = fieldnames(newData1);
for i = 1:length(vars)
    assignin('base', vars{i}, newData1.(vars{i}));
end

length(Outputs1.signals.values(:,1))
t = Outputs.time(N:N+M);

% Pma pressures
n11 = Outputs.signals.values(N:N+M,1);
n10 = Outputs.signals.values(N:N+M,2);
n16 = Outputs.signals.values(N:N+M,3);
n15 = Outputs.signals.values(N:N+M,4);

% Rellative pump pressures
C2 = Outputs1.signals.values(N:N+M,1);
C16 = Outputs1.signals.values(N:N+M,2);
C18 = Outputs1.signals.values(N:N+M,3);
C25 = Outputs1.signals.values(N:N+M,4);

% Ring pressures
n2 = Outputs2.signals.values(N:N+M,1);
n7 = Outputs2.signals.values(N:N+M,2);
n8 = Outputs2.signals.values(N:N+M,3);
n13 = Outputs2.signals.values(N:N+M,4);

% Valve positions
C20 = Outputs3.signals.values(N:N+M,1);
C24 = Outputs3.signals.values(N:N+M,2);
C27 = Outputs3.signals.values(N:N+M,3);
C31 = Outputs3.signals.values(N:N+M,4);

u = [u; C20 C24 C27 C31 C2 C16 C18 C25];
y = [y; n2 n7 n8 n13 n11 n10 n16 n15];
end

%v1 = ones(length(u),1);
%v2 = ones(length(u),1);
%v3 = ones(length(u),1);
%v4 = ones(length(u),1);

%u = [v1 v2 v3 v4, u];
T = 0:Ts:(length(y)-1)*Ts;


'done'

%% Valve dynamics for steps of abitrary size
t_o = 9; %full opening time 
deg_o = 90; %full opening degree
v=deg_o/t_o;  %angular velocity deg/s
n_step=t_o/Ts %number of steps for a full opening
delta=1/n_step %step size 

% valve 1 aka C20
for p = 1:length(u)-1
   if  u(p,1)-u(p+1,1) >= 0.05
        'down'
        i=p
        ang = u(p,1)-u(p+1,1);
        dist = 90*ang;
        steps = (dist/v)/Ts;
        hold = u(p,1);
        for i = p:p+steps
            u(i,1) = hold-delta*(i-p);
        end
        p = p+steps;
    else if  u(p,1)-u(p+1,1) <= -0.05
        'up'  
        g=p
        ang = norm(u(p,1)-u(p+1,1));
        dist = 90*ang;
        steps = (dist/v)/Ts;
        hold = u(p,1);
        for g = p:p+steps
            u(g,1) = hold+delta*(g-p);
        end 
        p = p+steps;
    end 
    end
end 

% valve 2 aka C24
for p = 1:length(u)-1
   if  u(p,2)-u(p+1,2) >= 0.05
        'down'
        i=p
        ang = u(p,2)-u(p+1,2);
        dist = 90*ang;
        steps = (dist/v)/Ts;
        hold = u(p,2);
        for i = p:p+steps
            u(i,2) = hold-delta*(i-p);
        end
        p = p+steps;
    else if  u(p,2)-u(p+1,2) <= -0.05
        'up'  
        g=p
        ang = norm(u(p,2)-u(p+1,2));
        dist = 90*ang;
        steps = (dist/v)/Ts;
        hold = u(p,2);
        for g = p:p+steps
            u(g,2) = hold+delta*(g-p);
        end 
        p = p+steps;
    end 
    end
end 

% valve 3 aka C27
for p = 1:length(u)-1
   if  u(p,3)-u(p+1,3) >= 0.05
        'down'
        i=p
        ang = u(p,3)-u(p+1,3);
        dist = 90*ang;
        steps = (dist/v)/Ts;
        hold = u(p,3);
        for i = p:p+steps
            u(i,3) = hold-delta*(i-p);
        end
        p = p+steps;
    else if  u(p,3)-u(p+1,3) <= -0.05
        'up'  
        g=p
        ang = norm(u(p,3)-u(p+1,3));
        dist = 90*ang;
        steps = (dist/v)/Ts;
        hold = u(p,3);
        for g = p:p+steps
            u(g,3) = hold+delta*(g-p);
        end 
        p = p+steps;
    end 
    end
end 

% valve 4 aka C31
for p = 1:length(u)-1
   if  u(p,4)-u(p+1,4) >= 0.05
        'down'
        i=p
        ang = u(p,4)-u(p+1,4);
        dist = 90*ang;
        steps = (dist/v)/Ts;
        hold = u(p,4);
        for i = p:p+steps
            u(i,4) = hold-delta*(i-p);
        end
        p = p+steps;
    else if  u(p,4)-u(p+1,4) <= -0.05
        'up'  
        g=p
        ang = norm(u(p,4)-u(p+1,4));
        dist = 90*ang;
        steps = (dist/v)/Ts;
        hold = u(p,4);
        for g = p:p+steps
            u(g,4) = hold+delta*(g-p);
        end 
        p = p+steps;
    end 
    end
end 



