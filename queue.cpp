#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = {0};
int read_index=0;
int write_index=0;
int size=0;
int isQueueEmpty(void)
{
    return (size == 0) ? 1 : 0;
}
int isQueueFull(void)
{
    return (size == (QUEUE_SIZE)) ? 1 : 0;
}

int remove(void)
{
    if (!isQueueEmpty())
    {
        int data = queue_table[read_index];
        read_index++;
        size--;
        if(read_index == QUEUE_SIZE) {
            read_index = 0;
        }
        return data;

    }
    return 0;
}

int first(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[read_index];
    }

    return 0;
}

void add(int val)
{
    if (!isQueueFull())
    {
        size++;
        queue_table[write_index] = val;
        write_index++;
        if(write_index == QUEUE_SIZE){
            write_index = 0;
        }
    }
}