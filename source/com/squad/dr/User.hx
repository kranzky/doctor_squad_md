package com.squad.dr;

class User
{
  public var id:Int;

  private static var _is_valid:Bool;
  public static var me(_get_me, null):User;
  public function new():Void
  {
    if (!_is_valid) {
      throw "Don't create User directly, silly. Get a room.";
    }
    id = 1000000 + Std.random(1000000);
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
}
