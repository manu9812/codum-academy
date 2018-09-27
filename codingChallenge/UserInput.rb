load 'command.rb'

class UserInput

  attr_reader :command

  def initialize
    @command = Command.new  instructionArrangement:[]
  end

  def readCommand
    @command = Command.new  instructionArrangement:gets.chomp.split(' ')
  end

  def validateData

  end

end
