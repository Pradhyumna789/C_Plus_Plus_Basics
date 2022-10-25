void printTable(int start, int end, int step) {
    int cel = 1;
    for(int i=start; i <= end; i+=step){
        cel = (i-32) * 5/9;
        cout << i << "  "<< cel << endl;
    }
}