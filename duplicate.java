class duplicate 
{
    public static void main(String[] args) {
        int x[] = {10,20,20,30,30,40,50,50,60};
        int f=0;
        int n = x.length;

        for(int i=0; i<n; i++)
        {
            f=0;
            for(int j=i+1; j<n; j++)
            {
                if(x[i]==x[j])
                {
                    f=1;

                }

            }

            if(f==1)
            continue;
            System.out.println(x[i]);

        }

    }
}
