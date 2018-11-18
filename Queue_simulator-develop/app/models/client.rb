require_relative 'queue'

class Client
  attr_accessor :name
  def initialize
    @wait_time
    @name
    @time_cahs_register
  end

  def choose_queue(queues)
    shorter_queue = queues.first
    queues.each do |queue|
      shorter_queue = queue if queue.num_clients < shorter_queue.num_clients
    end
    shorter_queue
  end

  def assign_name
    letters = %w[a b d e f g h i j k l m n o p r s t u v x y z]
    @name = letters[rand(letters.size)]
  end
end
