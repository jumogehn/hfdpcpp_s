--[[-------------------------------------------------------- -*- LUA -*- ----
Name:        duck.lua
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
local setmetatable   = setmetatable
local getmetatable   = getmetatable
local print          = print
local package        = package
local setfenv        = setfenv
-----------------------------------------------------------------------------

--[[ module declaration ]]---------------------------------------------------
local modname = ...
local _M = {}
package.loaded[modname] = _M
setfenv(1, _M)
_NAME = modname
_VERSION = "1.0"

local class = setmetatable( _M, {} )
local meta = getmetatable( class )

function meta:__tostring()
    return ( "%s/%s" ):format( self._NAME, self._VERSION )
end

local ometa = { __index = class, __newindex = class }

--[[ Private Variables ]]----------------------------------------------------

local FlyBehavior = nil
local QuackBehavior = nil

--[[ Public Methods ]]-------------------------------------------------------

function setQuackBehavior(self, quackbehavior)
  print(_NAME .. ':setQuackBehavior')
  QuackBehavior = quackbehavior
end

function setFlyBehavior(self, flybehavior)
  print(_NAME .. ':setFlyBehavior')
  FlyBehavior = flybehavior
end

function performFly(self)
  print(_NAME .. ':performFly')
  FlyBehavior:fly()
end

function performQuack(self)
  print(_NAME .. ':performQuack')
  QuackBehavior:quack()
end

function swim(self)
  print(_NAME .. ':swim')
  print('---- Ducks dont swim. Ducks float')
end

--[[ constructor ]]----------------------------------------------------------
local function Init(quackbehavior, flybehavior)
  print(_NAME .. ':Init')
  QuackBehavior = quackbehavior
  FlyBehavior = flybehavior
end
function meta:__call(quackbehavior, flybehavior)
  Init(quackbehavior, flybehavior)
  return setmetatable( {}, ometa )
end

--[[ EOF ]]------------------------------------------------------------------
