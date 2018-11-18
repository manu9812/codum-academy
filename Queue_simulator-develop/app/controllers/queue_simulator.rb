require_relative '../models/market'
require_relative '../models/client'
require_relative '../views/printer_console'
class QueueSimulator
  def initialize
    @type_simulation
    @delta_t
    @market = Market.new
    @iterations
    @num_cash_register
    @counter = 0
    @num_clients_pm
    @ramdom_clients
  end

  def run
    get_data
    @market.create_cash_register(@num_cash_register, @type_simulation)
    define_clients
    @market.enter_clients(@num_clients_pm)
  end

  def get_data
    get_type_simulation
    get_n_cash_register
    get_iterations
    get_delta_t
  end

  def define_clients
    if @counter == 0
      @ramdom_clients = rand(5)
      @num_clients_pm = rand(@ramdom_clients)
      @ramdom_clients -= @num_clients_pm
      @counter += 1
    elsif @counter == 1
      @num_clients_pm = rand(@ramdom_clients)
      @ramdom_clients -= @num_clients_pm
      @counter += 1
    elsif @counter == 2
      @num_clients_pm = @ramdom_clients
      @ramdom_clients = 0
      @counter = 0
    end
  end

  def delay
    sleep(@delta_t)
  end

  protected

  def get_type_simulation
    puts 'ingrese el tipo de simulacion que desea hacer.'
    puts '(multiples cajas-unica fila / multiples cajas-multiples filas) 1 / 2:'
    input = gets.chomp.to_i
    if input == 1
      @type_simulation = :M_M
    elsif input == 2
      @type_simulation = :M_1
    else
      puts 'opcion incorrecta'
      get_type_simulation
    end
  end

  def get_iterations
    puts 'ingrese el tiempo de simulacion en minutos:'
    @iterations = gets.chomp.to_i
  end

  def get_delta_t
    puts 'ingrese el delta de tiempo deseado para cada iteracion en segundos'
    @delta_t = gets.chomp.to_i
  end

  def get_n_cash_register
    puts 'ingrese la cantidad de cajas registradoras'
    @num_cash_register = gets.chomp.to_i
  end
end
