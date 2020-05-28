class Singleton
{
  public:
    static Singleton& Instance()
    {
        
        static Singleton s;
        return s;
    }

  private:
    Singleton()
    {
        
    }
    ~Singleton()
    {
        
    }

  
    Singleton(Singleton const&);
    Singleton& operator= (Singleton const&);
};
