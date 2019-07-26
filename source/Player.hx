package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxAngle;
import flixel.math.FlxPoint;
import flixel.util.FlxPool;
import flixel.util.FlxSpriteUtil;
import flixel.system.FlxSound;

class Player extends FlxSprite
{
	// Variables
	
	public function new()
	{
		super(FlxG.width/2 - 300, 356);
		loadGraphic("assets/rover.png");
		setGraphicSize(20,20);
		updateHitbox();
	}

	override public function update(elapsed:Float):Void
	{
		// Start Stationary
		velocity.x = 0;
		velocity.y = 0;

		// Movement keys, some gravitational logic
		if (FlxG.keys.anyPressed([LEFT, A]))
		{
			velocity.x -= 250;	

		}

		if (FlxG.keys.anyPressed([RIGHT, D]))
		{
			velocity.x += 250;	

		}

		// Make it look nicer
		if (FlxG.keys.pressed.SPACE && (y >= 200 && y <= 356))
		{
			velocity.y -= 250;
		}

		if (FlxG.keys.checkStatus(SPACE, 0) && (y <= 356))
		{
			velocity.y += 150;
		}

		super.update(elapsed);

		// Boundaries
		if (x > FlxG.width - width - 20)
		{
			x = FlxG.width - width - 20;
		}		
			
		if (x < 4)
		{
			x = 4;
		}
		if (y > 356)
		{
			y = 356;
		}
		if ( y < 4)
		{
			y = 4;
		}

	}
}
