/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_40_cron_entry.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_cron_entry_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_cron_entry_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_cron_entry_line.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_40_cron_entry_line;


/// <summary>
/// 
/// </summary>
class  V0_0_40_cron_entry
    : public ModelBase
{
public:
    V0_0_40_cron_entry();
    virtual ~V0_0_40_cron_entry();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_cron_entry members

    /// <summary>
    /// Flags
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Ranged string specifying eligible minute values (e.g. 0-10,50)
    /// </summary>
    utility::string_t getMinute() const;
    bool minuteIsSet() const;
    void unsetMinute();

    void setMinute(const utility::string_t& value);

    /// <summary>
    /// Ranged string specifying eligible hour values (e.g. 0-5,23)
    /// </summary>
    utility::string_t getHour() const;
    bool hourIsSet() const;
    void unsetHour();

    void setHour(const utility::string_t& value);

    /// <summary>
    /// Ranged string specifying eligible day of month values (e.g. 0-10,29)
    /// </summary>
    utility::string_t getDayOfMonth() const;
    bool dayOfMonthIsSet() const;
    void unsetDay_of_month();

    void setDayOfMonth(const utility::string_t& value);

    /// <summary>
    /// Ranged string specifying eligible month values (e.g. 0-5,12)
    /// </summary>
    utility::string_t getMonth() const;
    bool monthIsSet() const;
    void unsetMonth();

    void setMonth(const utility::string_t& value);

    /// <summary>
    /// Ranged string specifying eligible day of week values (e.g.0-3,7)
    /// </summary>
    utility::string_t getDayOfWeek() const;
    bool dayOfWeekIsSet() const;
    void unsetDay_of_week();

    void setDayOfWeek(const utility::string_t& value);

    /// <summary>
    /// Time specification (* means valid for all allowed values) - minute hour day_of_month month day_of_week
    /// </summary>
    utility::string_t getSpecification() const;
    bool specificationIsSet() const;
    void unsetSpecification();

    void setSpecification(const utility::string_t& value);

    /// <summary>
    /// Command to run
    /// </summary>
    utility::string_t getCommand() const;
    bool commandIsSet() const;
    void unsetCommand();

    void setCommand(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_cron_entry_line> getLine() const;
    bool lineIsSet() const;
    void unsetLine();

    void setLine(const std::shared_ptr<V0_0_40_cron_entry_line>& value);


protected:
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
    utility::string_t m_Minute;
    bool m_MinuteIsSet;
    utility::string_t m_Hour;
    bool m_HourIsSet;
    utility::string_t m_Day_of_month;
    bool m_Day_of_monthIsSet;
    utility::string_t m_Month;
    bool m_MonthIsSet;
    utility::string_t m_Day_of_week;
    bool m_Day_of_weekIsSet;
    utility::string_t m_Specification;
    bool m_SpecificationIsSet;
    utility::string_t m_Command;
    bool m_CommandIsSet;
    std::shared_ptr<V0_0_40_cron_entry_line> m_Line;
    bool m_LineIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_cron_entry_H_ */