--[[-------------------------------------------------------- -*- LUA -*- ----
Name:        modelduck.lua
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

package.loaded["ducks.duck"] = nil
local Duck     = require "ducks.duck"
local class    = setmetatable( _M, {__index = Duck, __newindex = Duck} )
local meta     = getmetatable( class )

function meta:__tostring()
    return ( "%s/%s" ):format( self._NAME, self._VERSION )
end

local ometa = { __index = class, __newindex = class }

--[[ import package classes ]]-----------------------------------------------

package.loaded["ducks.flynoway"] = nil
package.loaded["ducks.fakequack"] = nil
local FlyNoWay = require "ducks.flynoway"
local FakeQuack = require "ducks.fakequack"

--[[ Public Methods ]]-------------------------------------------------------

function display(self)
  print(_NAME .. ':display')
  print('---- I am a Model Duck')
end

--[[ constructor ]]----------------------------------------------------------

local function Init()
  print(_NAME .. ':Init')
  Duck(FakeQuack(), FlyNoWay())
  --...
end
function meta:__call()
  Init()
  return setmetatable( {}, ometa )
end

--[[ EOF ]]------------------------------------------------------------------
