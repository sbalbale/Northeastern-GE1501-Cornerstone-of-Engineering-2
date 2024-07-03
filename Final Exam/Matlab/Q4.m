% Write a Matlab code to solve the following set 
% of simultaneous linear equations using an m-file.  
% Show the 2 ways they can be solved in the m-file.  

% x + y + z + t = 4
% 2x + t - 2  = y
% 3x + y - z - t = 2
% x - 3z - 2y + t + 3 = 0


% For output, you do not need to use 
% fprintf, just show the solutions. 
% Remember to use 2 ways to solve this.  
% Upload the m-file. 


% Solve using matrix division
% Rearange the equations to get the coefficient matrix A and the matrix of constants B
% Put the unknowns on the left side of the equation and the constants on the right side of the equation
% and rearrange the each equation to follow the form a + b + c + d = e
% x + y + z + t = 4
% 2x - y + 0z + t = 2
% 3x + y - z - t = 2
% x - 2y - 3z + t = -3


% Method 1: Left division (A\B)
disp('Solution using left division:');
% Matrix of coefficients A
A = [1, 1, 1, 1;
     2, -1, 0, 1;
     3, 1, -1, -1;
     1, -2, -3, 1]

% Matrix of constants B
B = [4; 
     2; 
     2; 
     -3]

% Method 1: Left division (A\B)
X1 = A\B;

disp(X1);

% Method 2: Right division (B/A)
disp('Solution using right division:');
%  Matrix of coefficients A
A = [1, 2, 3, 1;
     1, -1, 1, -2;
     1, 0, -1, -3;
     1, 1, -1, 1]

% Matrix of constants B
B = [4, 2, 2, -3]

X2 = B/A;
disp(X2);



