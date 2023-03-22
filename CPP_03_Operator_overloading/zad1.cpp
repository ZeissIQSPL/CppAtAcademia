class Vec3d{
public:
    Vec3d(int x, int y, int z): _x(x), _y(y), _z(z){}

    Vec3d operator+(const Vec3d& second_vector){
        return Vec3d(_x + second_vector.getX(), _y + second_vector.getY(), _z + second_vector.getZ());
    }

    Vec3d operator-(const Vec3d& second_vector){
        return Vec3d(_x - second_vector.getX(), _y - second_vector.getY(), _z - second_vector.getZ());
    }

    void operator++(){
        _x++;
        _y++;
        _z++;
    }

    Vec3d operator*(const Vec3d& second_vector){
        return Vec3d(_y*second_vector.getZ() - _z*second_vector.getY(),
         _z*second_vector.getX() - _x*second_vector.getZ(), _x*second_vector.getY() - _y*second_vector.getX());
    }

    bool operator==(const Vec3d& second_vector){
        
        return _x == second_vector.getX() && _y == second_vector.getY() && _z == second_vector.getZ();
    }

    bool operator!=(const Vec3d& second_vector){
        return _x != second_vector.getX() && _y != second_vector.getY() && _z != second_vector.getZ();
    }


    int getX() const { return _x;}
    int getY() const { return _y;}
    int getZ() const { return _z;}

private:
    int _x=0;
    int _y=0;
    int _z=0;    
};


int main(){
}