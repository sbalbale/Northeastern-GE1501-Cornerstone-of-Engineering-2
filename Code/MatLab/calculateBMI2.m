% Recall “calculateBMI.m”
calculateBMI %run script file & enter #’s
save BMI %creates a BMI.mat file
clear %clear workspace variables
load BMI %load BMI.mat file again
f=fopen('BMI_data.txt','w'); %open file
fprintf(f,'%.2f\t%.2f\t%.2f',weight,height,BMI)
%write data to file & open BMI_data.txt file
load BMI_data.txt %load file as 13 array
fclose(f) %close file
