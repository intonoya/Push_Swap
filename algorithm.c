#include "push_swap.h"

void    butterfly(t_list **stack_a, t_list **stack_b, int n)
{
    int count;

    count = 0;
    while (*stack_a)
    {
        if((*stack_a)->index <= count)
        {
            pb(stack_a, stack_b);
            ra_rab(stack_b, 2);
            count++;
        }
        else if ((*stack_a)->index <= count + n)
        {
            pb(stack_a, stack_b);
            count++;
        }
        else
            ra_rb(stack_a, 1);
    }
}

void    push_to_stack_a(t_list **stack_a, t_list **stack_b, int len)
{
    int max;

    max = 0;
    while (*stack_b)
    {
        max = maximum(stack_b);
        if (max <= len / 2)
        {
            while (max-- >= 1)
                ra_rb(stack_b, 2);
            pa(stack_a, stack_b);
            len--;
        }
        else if (max > len / 2)
        {
            while (len - max)
            {
                rra_rrb(stack_b, 2);
                max++;
            }
            pa(stack_a, stack_b);
            len--;
        }
    }
} 