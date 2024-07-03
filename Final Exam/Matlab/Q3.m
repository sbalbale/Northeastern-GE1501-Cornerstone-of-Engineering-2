% Consider the following functions:


% S = sin(t^2)
% C = cos(t^2)


% Plot S and C functions shown above on the same 
% plot where t goes from -3 to 3 (use increments  of 0.05). 
% Include a title and legend. Use different plot styles for 
% each line, such as a colour or line type (not yellow).  
% Make sure you label your axes

% Define the range of t values from -3 to 3 with a step size of 0.05
t = -3:0.05:3;
% Calculate the values of sin(t^2) and cos(t^2)
s = sin(t.^2);
c = cos(t.^2);

% Create a new figure for plotting
figure
% Plot the values of sin(t^2) and cos(t^2) with different line styles
plot(t, s, 'r', t, c, 'b--')

% Set the title of the plot
title('Plot of sin(t^2) and cos(t^2)')

% Set the x-axis label
xlabel('t')

% Set the y-axis label
ylabel('Value')

% Add a legend to the plot
legend('sin(t^2)', 'cos(t^2)')

% Enable grid lines on the plot
grid on
