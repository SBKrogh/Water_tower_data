%% %import data

clc 
clear all


%importfile('Filterdata');
%importfile('outputs21031430'); % C2 2.25| C16 2.25 | C18 0.8 | C25 4.2 | WT_L = 100L
%importfile('outputs21031310'); % C2 2.4| C16 2.4 | C18 0.7 | C25 4.2 | WT_L = 180L 
importfile('outputs21031430'); % C2 2.05| C16 2.05 | C18 0.7 | C25 4.2 | WT_L = 30L 
%importfile('outputs21031420'); % C2 2.05| C16 2.05 | C18 0.7 | C25 4.2 | WT_L = 30L 
%A = importdata(Filter_data)
%newData1 = load('-mat', Filterdata);


%% %extraxt from struct  --**-- all valves open --**--

clc
clear all

Ts = 0.05;
SS = 25;
N = SS/Ts;
M = 2099; %(M+1) = number of sampels pr steadystate wanted 
u = [];
y = [];

for k = 1:15
    
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
%% Valve dynamics

t_o=9
steps=t_o/Ts
delta=1/steps
ti=85.05

% valve 1 aka C20
for p = 1:length(u)-1
   if  u(p,1)-u(p+1,1) == 1
        'down'
        i=p
        for i = p:p+steps
            u(i,1) = 1-delta*(i-p);
        end    
    else if  u(p,1)-u(p+1,1) == -1
        'up'  
        g=p
        for g = p:p+steps
            u(g,1) = delta*(g-p);
        end    
    end 
    end
end    

% valve 2 aka C24
for p = 1:length(u)-1
   if  u(p,2)-u(p+1,2) == 1
        'down'
        i=p
        for i = p:p+steps
            u(i,2) = 1-delta*(i-p);
        end    
    else if  u(p,2)-u(p+1,2) == -1
        'up'  
        g=p
        for g = p:p+steps
            u(g,2) = delta*(g-p);
        end    
    end 
    end
end    

% valve 3 aka C27
for p = 1:length(u)-1
   if  u(p,3)-u(p+1,3) == 1
        'down'
        i=p
        for i = p:p+steps
            u(i,3) = 1-delta*(i-p);
        end    
    else if  u(p,3)-u(p+1,3) == -1
        'up'  
        g=p
        for g = p:p+steps
            u(g,3) = delta*(g-p);
        end    
    end 
    end
end    

% valve 4 aka C31
for p = 1:length(u)-1
   if  u(p,4)-u(p+1,4) == 1
        'down'
        i=p
        for i = p:p+steps
            u(i,4) = 1-delta*(i-p);
        end    
    else if  u(p,4)-u(p+1,4) == -1
        'up'  
        g=p
        for g = p:p+steps
            u(g,4) = delta*(g-p);
        end    
    end 
    end
end    

%% %edge detection
% f = edge(n2);
% j=0
% for n = 1:length(f)
%     
%    if f(n) == 1
%        j=j+1
%        tt=0.05*n
%        e(j)=tt       
%    end 
% end    
% 
% o = mean(n2)*ones(length(e),1)


%% %plot
close all

plot(t,n11,t,n10,t,n16,t,n15)
legend('n11','n10','n16','n15')
title('PMA Pressures')
xlabel('Seconds')
ylabel('Bar')
grid on;

figure(2)
plot(t,C2,t,C16,t,C18,t,C25)
legend('C2','C16','C18','C25')
title('Relative pump pressures')
xlabel('Seconds')
ylabel('Bar')
grid on;

figure(3)
plot(t,n2,t,n7,t,n8,t,n13)
legend('C2','C16','C18','C25')
title('Ring pressures')
xlabel('Seconds')
ylabel('Bar')
grid on;

%hold on
%plot(e,o,'*')