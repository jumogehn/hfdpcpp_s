--[[-------------------------------------------------------- -*- LUA -*- ----
Name:        miniducksimulator.lua
Purpose:     
Author:      Journeyer J. Joh
Modified by:
Created:     2014-03-05
Copyright:   (c) 2014 Journeyer J. Joh
License:     AFL 3.0
--]]-------------------------------------------------------------------------

-- Based on Hakki Dogusan and Petite Abeille's module usage style
-- From http://lua-users.org/wiki/TemplatePattern

--[[ import ]]---------------------------------------------------------------
local require = require
local print   = print
-----------------------------------------------------------------------------

local FlyRocketPowered = require "ducks.flyrocketpowered"
local MallardDuck      = require "ducks.mallardduck"
local RubberDuck       = require "ducks.rubberduck"
local DecoyDuck        = require "ducks.decoyduck"
local ModelDuck        = require "ducks.modelduck"

local Donald = MallardDuck()
local Rubby = RubberDuck()
local Decoyee = DecoyDuck()
local Sharon = ModelDuck()

print()
print(Donald)
print(MallardDuck)
Donald:performQuack()
Donald:performFly()

print()
print(Rubby )
print(RubberDuck)
Rubby:performQuack()
Rubby:performFly()

print()
print(Decoyee )
print(DecoyDuck)
Decoyee:performQuack()
Decoyee:performFly()

print()
print(Sharon)
print(ModelDuck)
Sharon:performQuack()
Sharon:performFly()
print()
Sharon:setFlyBehavior(FlyRocketPowered())
Sharon:performFly()

