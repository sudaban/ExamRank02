int	ft_atoi(const char *str){
    int state = 1;
    int result = 0;

    while (*str >= 9 && *str <= 13)
        str++;
    if (*str == '-' || *str == '+')
    {
        str++;
        state = -1;
    }
    if (*str == '-' || *str == '+')
        return 0;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * state;
}
