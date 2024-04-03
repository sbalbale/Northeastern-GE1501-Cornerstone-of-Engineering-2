% Part 1:

% Write a Matlab code to solve this set of linear equation using an m-file:
% 4a-2b+6d=12+3c
% 7b+6.5c-6d+6.5=6a
% a-16+7.5b+6.25c+5.5d=0
% -d+22b -12a+15.5c =17

% Use the 2 ways (left div and right div) they can be solved in the m-file. 
% For output, you do not need to use fprintf, just show the solutions. Upload the m-file.  

% Solution:
syms a b c d
eq1 = 4*a - 2*b + 6*d == 12 + 3*c;
eq2 = 7*b + 6.5*c - 6*d + 6.5 == 6*a;
eq3 = a - 16 + 7.5*b + 6.25*c + 5.5*d == 0;
eq4 = -d + 22*b - 12*a + 15.5*c == 17;
[A, B] = equationsToMatrix([eq1, eq2, eq3, eq4], [a, b, c, d]);
X = linsolve(A, B);
disp(X);
