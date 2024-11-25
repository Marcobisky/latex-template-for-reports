% MATLAB code snippet to demonstrate functions, plotting, and control flow

function main()
    % Main function to demonstrate MATLAB functionality
    
    % Define an anonymous function
    f = @(x) sin(x) + cos(x);
    
    % Call a custom function and generate a plot
    x = linspace(0, 2*pi, 100);
    y = customFunction(x, f);
    
    % Plot the result
    figure;
    plot(x, y, 'LineWidth', 1.5);
    title('Plot of sin(x) + cos(x)');
    xlabel('x');
    ylabel('y');
    grid on;
end

function y = customFunction(x, func)
    % A custom function with a loop and a switch-case statement
    y = zeros(size(x));
    for i = 1:length(x)
        switch true
            case x(i) < pi
                y(i) = func(x(i)); % Apply the anonymous function
            case x(i) >= pi
                y(i) = func(x(i)) * 2; % Double the result for x >= pi
        end
    end
end

% Call the main function
main();