int main (void)
{
    unsigned int first_value = 0;
    unsigned int second_value = 0;
    unsigned short third_value = 0;
    int element = -126;
    int delement = 127;
    element -= delement;
    _asm 
    {
        pushfd
        pop first_value
    }
    third_value += 300000000;
    second_value = first_value;
    for (int i = 0; i < 4; i++)
    {
        printf("%u ", (second_value << 20) >> 31);
        second_value = first_value;
        printf("%u ", (second_value << 24) >> 31);
        second_value = first_value;
        printf("%u ", (second_value << 25) >> 31);
        second_value = first_value;
        printf("%u ", (second_value << 31) >> 31);
    }
    return 0;
}