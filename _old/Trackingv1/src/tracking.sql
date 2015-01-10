/*
Navicat SQLite Data Transfer

Source Server         : Tracking
Source Server Version : 30802
Source Host           : :0

Target Server Type    : SQLite
Target Server Version : 30802
File Encoding         : 65001

Date: 2014-09-22 06:16:37
*/

PRAGMA foreign_keys = OFF;

-- ----------------------------
-- Table structure for sqlite_sequence
-- ----------------------------
DROP TABLE IF EXISTS "main"."sqlite_sequence";
CREATE TABLE sqlite_sequence(name,seq);

-- ----------------------------
-- Records of sqlite_sequence
-- ----------------------------
INSERT INTO "main"."sqlite_sequence" VALUES ('levels', 3);
INSERT INTO "main"."sqlite_sequence" VALUES ('types', 3);
INSERT INTO "main"."sqlite_sequence" VALUES ('users', 4);
INSERT INTO "main"."sqlite_sequence" VALUES ('tracks', 0);

-- ----------------------------
-- Table structure for levels
-- ----------------------------
DROP TABLE IF EXISTS "main"."levels";
CREATE TABLE "levels" (
"level_id"  INTEGER PRIMARY KEY AUTOINCREMENT,
"level"  TEXT(50)
);

-- ----------------------------
-- Records of levels
-- ----------------------------
INSERT INTO "main"."levels" VALUES (1, 'low');
INSERT INTO "main"."levels" VALUES (2, 'medium');
INSERT INTO "main"."levels" VALUES (3, 'high');

-- ----------------------------
-- Table structure for tracks
-- ----------------------------
DROP TABLE IF EXISTS "main"."tracks";
CREATE TABLE "tracks" (
"track_id"  INTEGER PRIMARY KEY AUTOINCREMENT,
"issue"  TEXT,
"type_id"  INTEGER,
"level_id"  INTEGER,
"open_date"  TEXT,
"open_user_id"  INTEGER,
"close_date"  TEXT,
"close_user_id"  INTEGER,
"comments"  TEXT
);

-- ----------------------------
-- Records of tracks
-- ----------------------------

-- ----------------------------
-- Table structure for types
-- ----------------------------
DROP TABLE IF EXISTS "main"."types";
CREATE TABLE "types" (
"type_id"  INTEGER PRIMARY KEY AUTOINCREMENT,
"type"  TEXT(50)
);

-- ----------------------------
-- Records of types
-- ----------------------------
INSERT INTO "main"."types" VALUES (1, 'error');
INSERT INTO "main"."types" VALUES (2, 'add');
INSERT INTO "main"."types" VALUES (3, 'check');

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS "main"."users";
CREATE TABLE "users" (
"user_id"  INTEGER PRIMARY KEY AUTOINCREMENT,
"user"  TEXT(50)
);

-- ----------------------------
-- Records of users
-- ----------------------------
INSERT INTO "main"."users" VALUES (1, 'Laurent');
INSERT INTO "main"."users" VALUES (2, 'Thomas');
INSERT INTO "main"."users" VALUES (3, 'Christopher');
INSERT INTO "main"."users" VALUES (4, 'Bénédicte');
