

struct box
{
int length,width,height;
};

typedef struct box box;

int get_volume(box b) {
    int volume=b.length*b.height*b.width;
    return volume;
}

int is_lower_than_max_height(box b) {
    if (b.height<41) {
    return 1;
    }
    else {
    return 0;
    }
}
