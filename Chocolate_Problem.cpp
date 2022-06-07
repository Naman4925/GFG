 sort(a.begin(),a.end());
    int min=INT_MAX;
    
    for(int i=0;i+m-1<n;i++){
        int d=a[i+m-1]-a[i];
        if(d<min)
        min=d;
    }
    return min;
    }   
};
