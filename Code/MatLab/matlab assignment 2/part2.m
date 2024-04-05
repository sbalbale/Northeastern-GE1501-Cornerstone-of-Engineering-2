% Write an mfile and in that:
% Create a 1D array (row) for x from -2 to 0 with increment of 0.2
% Create another 1D array (row) for y from -1 to 1 with increment of 0.2
% Calculate this function for this range of x and y:
% z=xe(-(sin(x))^2-(sin(y))^2)
% write the values of function z for this range of x and y. For that you need to use fprinf as below:
% fprintf('for %4.2f <x< %4.2f and %4.2f<y<%4.2f we have %4.2f <z< %4.2f \n',x(1),x(end),y(1),y(end),z(1),z(end));
% Now set sin(y)=1 so we will have this new function:
% z_two=xe(-(sin(x))^2-1^2)  
% plot function z_two for the range of x you created above. Include a title (any title you like) and label for your axes and put the line color as black.

x = -2:0.2:0;
y = -1:0.2:1;
z = x.*exp(-(sin(x)).^2-(sin(y)).^2);

fprintf('for %4.2f <x< %4.2f and %4.2f<y<%4.2f we have %4.2f <z< %4.2f \n',x(1),x(end),y(1),y(end),z(1),z(end));

z_two = x.*exp(-(sin(x)).^2-(1)^2);

figure
plot(x,z_two,'k')
title('Plot of z=xe^{(-(sin(x))^2-(1)^2)}')
xlabel('x')
ylabel('z')
grid on