% Write a program that calculates the perimeter 
% and area of any triangle:

% Perimeter: s = (a+b+c)

% Area: a=sqrt (s*(s-a)*(s-b)*(s-c))

% Input these values as the sides of the triangle 
% in your program:

% a=3;

% b=2;

% c=2;

% but test your program with other inputs as well, 
% it should work for any triangle. Include comments 
% in your program to explain what is done in every part. 
% Show the output in a user-friendly manner:

% Perimeter of this triangle is:

%      XXX

% Area of this triangle is:

% XXX


% Define the sides of the triangle
% a=3;
% b=2;
% c=2;

a=10;
b=11;
c=12;

% Calculate the perimeter
perimeter = (a+b+c);

% Calculate the area
area = 0.25 * sqrt (perimeter * (-a + b + c) * (a - b + c) * (a + b - c) );
% format short g

% Display the results
fprintf('Perimeter of this triangle is: \n');
fprintf('%d\n', s);
fprintf('Area of this triangle is: \n');
fprintf('%f\n', area);

