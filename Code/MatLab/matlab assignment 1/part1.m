% Write a program for linear interpolation:

% Linear interpolation is a straight-line approximation
%  between the known points. f(a), a, f(c), and c are known.
%  We wish to estimate f(b) where: a < b < c. This is the formula:

% Input these values as the input values in your program:

% a= 2;

% f_a=1.5;

% c= 10;

% f_c= 21;

% b=8

% and calculate f_b.

% test your program with other inputs as well, it should
%  work for any input (Note: b should always be larger than 
% a and smaller than c: a<b<c). Include comments in your 
% program to explain what is done in every part. Show the 
% output in a user-friendly manner:

 
% f_b=

%    XXX

% Inputs:
a= 2;
f_a=1.5;
c= 10;
f_c= 21;
b=8;

% Calculation:
f_b=((f_c-f_a)/(c-a))*(b-a)+f_a;

% Output:
fprintf('f_b= %f\n', f_b)

