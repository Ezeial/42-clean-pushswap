#include "push_swap.h"

static int	ft_will_exceed(unsigned long current_value, int sign, int next_digit)
{
	if (current_value > INT_MAX / 10)
		return (-1);
	if (sign > 0 && current_value * 10 + next_digit > INT_MAX)
		return (-1);
	if (sign < 0 && current_value * 10 + next_digit > -INT_MIN)
		return (-1);
	return (0);
}

int	ft_parse_int(char **str, int *parsed_int)
{
	unsigned long	current_value;
	int				sign;

	sign = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	current_value = 0;
	while (**str && !ft_iswhitespace(**str))
	{
		if (!ft_isdigit(**str))
			return (-1);
		if (ft_will_exceed(current_value, sign, **str - '0') < 0)
			return (-2);
		current_value *= 10;
		current_value += **str - '0';
		(*str)++;
	}
	*parsed_int = sign * current_value;
	return (0);
}