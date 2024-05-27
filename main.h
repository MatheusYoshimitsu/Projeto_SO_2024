typedef struct header
{
    char *program_name;
    int segment_id;
    int original_priority;
    int segment_size;
    char *semaphores_list;
} ProgramHeader;

ProgramHeader readHeader(char *file_name);

// Virtual Commands
void exec(int t);
void read(int k);
void write(int k);
void P(int s);
void V(int s);
void print(int t);