class Command
  attr_reader :commandType, :row_size, :column_size, :x, :y, :color, :x1, :y1, :x2, :y2
  def initialize instructionArray:
    @commandType = instructionArrangement[0]
    if  instructionArrangement.size == 3
      @row_size =  instructionArrangement[2].to_i
      @column_size =  instructionArrangement[1].to_i
    elsif  instructionArrangement.size == 4
      @x =  instructionArrangement[1].to_i - 1
      @y =  instructionArrangement[2].to_i - 1
      @color =  instructionArrangement[3].to_s
    else
      @x1 =  instructionArrangement[1].to_i - 1
      @y1 =  instructionArrangement[2].to_i - 1
      @x2 =  instructionArrangement[3].to_i - 1
      @y2 =  instructionArrangement[4].to_i - 1
    end
  end
end
