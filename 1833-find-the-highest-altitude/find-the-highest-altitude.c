int largestAltitude(int* gain, int gainSize) {
    int i;
    int height=0;
    int max=height;
    int maxHeight=gain[0];
    for(i=0; i<gainSize; i++){
        height += gain[i]; //-5
        if(height>max)
            max=height;
    }
    return max;
}