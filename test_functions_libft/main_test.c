int main(int argc, char **argv)
{
    int i;
    
    printf("ft_memcpy: %s\n", ft_memcpy(argv[1], argv[2], atoi(argv[argc - 1])));
    printf("memcpy: %s\n", memcpy(argv[1], argv[2], atoi(argv[argc - 1])));
    
}
