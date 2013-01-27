package com.squad.dr;

class User
{
  public var id:Int;
  public var is_boss:Bool=false;
  public var name:String;
  public var team:Array<Int>;

  private static var _is_valid:Bool;
  public static var me(_get_me, null):User;

  static var prefixes : Array<String> = [
    "Dr",
    "Prof",
    "Chairman",
    "Sir"
  ];

  static var firstNames : Array<String> = [
    "Jack",
    "Robert",
    "Jason",
    "Richard",
    "Bradley",
    "Charles"
  ];

  static var nicknames : Array<String> = [
    "Hotlips",
    "Ace",
    "Dynamo",
    "Puncher",
    "Chippy",
  ];

  static var names : Array<String> = [
    "Carter",
    "Williams",
    "Sampson",
    "Ramirez",
    "Chester",
  ];

  static var suffixes : Array<String> = [
    " M.D.",
    ", Attending",
    " Jr.",
    " Sr.",
    " Esq.",
    " Ph.D",
  ];

  public function new():Void
  {
    if (!_is_valid) {
      throw "Don't create User directly, silly. Get a room.";
    }
    team = new Array<Int>();
    id = 1000000 + Std.random(1000000);
  }

  public static function getName( seed ):String
  {
    var name:String = choose( names );
    if (Math.random() > 0.7)
      name = "'" + choose( nicknames ) + "' " + name;
    if (Math.random() > 0.4) 
      name = choose( firstNames ) + " " + name;
    if (Math.random() > 0.2) 
      name = choose( prefixes ) + " " + name;
    if (Math.random() > 0.2) 
      name = name + choose( suffixes );
    return name;
  }

  public static function randomPlayer():Int
  {
    var i = Std.int(Math.random() * User.me.team.length);
    if (i > User.me.team.length-1)
      i = User.me.team.length - 1;
    return User.me.team[i];
  }

  public static function choose( array:Array<String> ) {
    var i = Std.int(Math.random() * (array.length - 1));
    return array[i];
  }

  private static function _get_me():User
  {
    if (me == null) {
      _is_valid = true;
      me = new User();
      _is_valid = false;
    }
    return me;
  }

  public function hello(user_id:Int):Bool
  {
    for (known_id in team) {
      if (user_id == known_id) {
        return false;
      }
    }
    return true;
  }
}
