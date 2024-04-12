namespace targets {
    class Alien {
        public:
            int x_coordinate;
            int y_coordinate;
            
            Alien(int x,int y) {
                x_coordinate = x;
                y_coordinate = y;
            }
            int get_health() {
                return health;
            }
            bool hit() {
                if (health > 0) {
                    health --;
                    return true;
                }
                else
                    return false;
            }
            bool is_alive() {
                if (health > 0)
                    return true;
                else 
                    return false;
            }
            bool teleport(int x,int y) {
                x_coordinate = x;
                y_coordinate = y;
                return true;
            }
            bool collision_detection(Alien alien) {
                if (alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate)
                    return true;
                else 
                    return false;
            }
        private:
            int health = 3;
    };
}