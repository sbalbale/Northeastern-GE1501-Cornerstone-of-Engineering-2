% Create a m-file in Matlab, write a code 
% for the problem below and  upload the m-file for this question.  
% The spread of a computer virus through a computer network can be modelled by:

% N(t) = 25.2*e^(0.16t)

% Where N(t) is the number of computers infected and 
% t is time in minutes.  Write the commands in the m-file 
% (new section, separate it with %%) to solve this problem.  
% Create a row vector for t from 1 to 15 by 1’s, then compute N(t).  
% Use an fprintf statement to print out the number of computers infected after 15 minutes.  

row = 1:15
N = 25.2 * exp(0.16 * row)
fprintf('The number of computers infected after 15 minutes is: %f\n', N(end));
