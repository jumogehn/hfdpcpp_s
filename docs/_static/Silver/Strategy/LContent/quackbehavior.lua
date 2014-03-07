--[[-------------------------------------------------------- -*- LUA -*- ----
Name:        quackbehavior.lua
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
local error          = error
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

local class    = setmetatable( _M, {} )
local meta     = getmetatable( class )

function meta:__tostring()
    return ( "%s/%s" ):format( self._NAME, self._VERSION )
end

--[[ Abstract Methods ]]-----------------------------------------------------
function quack(self)
  error("abstract method: should be implemented by derived")
end

--[[ constructor ]]----------------------------------------------------------
function meta:__call()
  error("private ctor!")
end

--[[ EOF ]]------------------------------------------------------------------
