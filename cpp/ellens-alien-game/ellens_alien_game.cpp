namespace targets {
  class Alien {
    public:
      int x_coordinate{0};
      int y_coordinate{0};

      Alien(int x, int y) {
        x_coordinate = x;
        y_coordinate = y;
      }

      int get_health() {
        return health;
      }

      bool hit() {
        return health -= 1;
      }

      bool is_alive() {
        return get_health() > 0;
      }

      bool teleport(int x_new, int y_new) {
        x_coordinate = x_new;
        y_coordinate = y_new;

        return true;
      }

      bool collision_detection(Alien alien) {
        return alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate;
      }

    private:
      int health{3};
  };
}  // namespace targets