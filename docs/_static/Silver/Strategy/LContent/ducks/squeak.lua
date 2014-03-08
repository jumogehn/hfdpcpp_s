--[[-------------------------------------------------------- -*- LUA -*- ----
Name:        squeak.lua
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
local require        = require
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

package.loaded["ducks.quackbehavior"] = nil
local QuackBehavior = require "ducks.quackbehavior"
local class    = setmetatable( _M, {__index = QuackBehavior, __newindex = QuackBehavior} )
local meta     = getmetatable( class )

function meta:__tostring()
    return ( "%s/%s" ):format( self._NAME, self._VERSION )
end

local ometa = { __index = class, __newindex = class }

--[[ Public Methods ]]-------------------------------------------------------

function quack(self)
  print(_NAME .. ':quack')
  print('---- Squeak')
end

--[[ constructor ]]----------------------------------------------------------

local function Init()
  print(_NAME .. ':Init')
  --QuackBehavior()
  --...
end
function meta:__call()
  Init()
  return setmetatable( {}, ometa )
end

--[[ EOF ]]------------------------------------------------------------------
