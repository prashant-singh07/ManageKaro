-- Add shops_ids column to users table
ALTER TABLE users ADD COLUMN IF NOT EXISTS shops_ids INTEGER[] DEFAULT '{}';
