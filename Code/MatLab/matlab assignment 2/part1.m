% Part 1:

% Write a Matlab code to solve this set of linear equation using an m-file:
% 4a-2b+6d=12+3c
% 7b+6.5c-6d+6.5=6a
% a-16+7.5b+6.25c+5.5d=0
% -d+22b -12a+15.5c =17

% Use the 2 ways (left div and right div) they can be solved in the m-file. 
% For output, you do not need to use fprintf, just show the solutions. Upload the m-file.  

% Solution:

% The system of linear equations can be written in matrix form as:
% A*X = B
% Where A is the coefficient matrix of the system of linear equations, X is the matrix of unknowns, and B is the matrix of constants.

% Solve using matrix division
% Rearange the equations to get the coefficient matrix A and the matrix of constants B
% Put the unknowns on the left side of the equation and the constants on the right side of the equation
% and rearrange the each equation to follow the form a + b + c + d = e
% 4a - 2b - 3c + 6d = 12
% 6a - 7b - 6.5c + 6d = 6.5
% a + 7.5b + 6.25c + 5.5d = 16
% -12a + 22b + 15.5c - d = 17

% Method 1: Left division (A\B)
% Matrix of coefficients A
A = [4, -2, -3, 6;
     6, -7, -6.5, 6;
     1, 7.5, 6.25, 5.5;
     -12, 22, 15.5, -1];

% Matrix of constants B
B = [12; 
      6.5; 
      16; 
      17];

% Method 1: Left division (A\B)
X1 = A\B;

disp('Solution using left division:');
disp(X1);

% Method 2: Right division (B/A)
%  Matrix of coefficients A
A = [4, 6, 1, -12;
     -2, -7, 7.5, 22;
     -3, -6.5, 6.25, 15.5;
     6, 6, 5.5, -1];

% Matrix of constants B
B = [12, 6.5, 16, 17];

X2 = B/A;
disp('Solution using right division:');
disp(X2);



