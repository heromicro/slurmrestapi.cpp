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



#include "slurmrestapi/model/V0_0_41_job_desc_msg_crontab.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_job_desc_msg_crontab::V0_0_41_job_desc_msg_crontab()
{
    m_FlagsIsSet = false;
    m_Minute = utility::conversions::to_string_t("");
    m_MinuteIsSet = false;
    m_Hour = utility::conversions::to_string_t("");
    m_HourIsSet = false;
    m_Day_of_month = utility::conversions::to_string_t("");
    m_Day_of_monthIsSet = false;
    m_Month = utility::conversions::to_string_t("");
    m_MonthIsSet = false;
    m_Day_of_week = utility::conversions::to_string_t("");
    m_Day_of_weekIsSet = false;
    m_Specification = utility::conversions::to_string_t("");
    m_SpecificationIsSet = false;
    m_Command = utility::conversions::to_string_t("");
    m_CommandIsSet = false;
    m_LineIsSet = false;
}

V0_0_41_job_desc_msg_crontab::~V0_0_41_job_desc_msg_crontab()
{
}

void V0_0_41_job_desc_msg_crontab::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_job_desc_msg_crontab::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FlagsIsSet)
    {
        val[utility::conversions::to_string_t(U("flags"))] = ModelBase::toJson(m_Flags);
    }
    if(m_MinuteIsSet)
    {
        val[utility::conversions::to_string_t(U("minute"))] = ModelBase::toJson(m_Minute);
    }
    if(m_HourIsSet)
    {
        val[utility::conversions::to_string_t(U("hour"))] = ModelBase::toJson(m_Hour);
    }
    if(m_Day_of_monthIsSet)
    {
        val[utility::conversions::to_string_t(U("day_of_month"))] = ModelBase::toJson(m_Day_of_month);
    }
    if(m_MonthIsSet)
    {
        val[utility::conversions::to_string_t(U("month"))] = ModelBase::toJson(m_Month);
    }
    if(m_Day_of_weekIsSet)
    {
        val[utility::conversions::to_string_t(U("day_of_week"))] = ModelBase::toJson(m_Day_of_week);
    }
    if(m_SpecificationIsSet)
    {
        val[utility::conversions::to_string_t(U("specification"))] = ModelBase::toJson(m_Specification);
    }
    if(m_CommandIsSet)
    {
        val[utility::conversions::to_string_t(U("command"))] = ModelBase::toJson(m_Command);
    }
    if(m_LineIsSet)
    {
        val[utility::conversions::to_string_t(U("line"))] = ModelBase::toJson(m_Line);
    }

    return val;
}

bool V0_0_41_job_desc_msg_crontab::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("flags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("flags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setFlags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFlags);
            setFlags(refVal_setFlags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("minute"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("minute")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMinute;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMinute);
            setMinute(refVal_setMinute);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("hour"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("hour")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setHour;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHour);
            setHour(refVal_setHour);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("day_of_month"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("day_of_month")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDayOfMonth;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDayOfMonth);
            setDayOfMonth(refVal_setDayOfMonth);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("month"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("month")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMonth;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMonth);
            setMonth(refVal_setMonth);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("day_of_week"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("day_of_week")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDayOfWeek;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDayOfWeek);
            setDayOfWeek(refVal_setDayOfWeek);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("specification"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("specification")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSpecification;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSpecification);
            setSpecification(refVal_setSpecification);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("command"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("command")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCommand;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCommand);
            setCommand(refVal_setCommand);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("line"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("line")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_cron_entry_line> refVal_setLine;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLine);
            setLine(refVal_setLine);
        }
    }
    return ok;
}

void V0_0_41_job_desc_msg_crontab::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_FlagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("flags")), m_Flags));
    }
    if(m_MinuteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("minute")), m_Minute));
    }
    if(m_HourIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("hour")), m_Hour));
    }
    if(m_Day_of_monthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("day_of_month")), m_Day_of_month));
    }
    if(m_MonthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("month")), m_Month));
    }
    if(m_Day_of_weekIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("day_of_week")), m_Day_of_week));
    }
    if(m_SpecificationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("specification")), m_Specification));
    }
    if(m_CommandIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("command")), m_Command));
    }
    if(m_LineIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("line")), m_Line));
    }
}

bool V0_0_41_job_desc_msg_crontab::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("flags"))))
    {
        std::vector<utility::string_t> refVal_setFlags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("flags"))), refVal_setFlags );
        setFlags(refVal_setFlags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("minute"))))
    {
        utility::string_t refVal_setMinute;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("minute"))), refVal_setMinute );
        setMinute(refVal_setMinute);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("hour"))))
    {
        utility::string_t refVal_setHour;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("hour"))), refVal_setHour );
        setHour(refVal_setHour);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("day_of_month"))))
    {
        utility::string_t refVal_setDayOfMonth;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("day_of_month"))), refVal_setDayOfMonth );
        setDayOfMonth(refVal_setDayOfMonth);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("month"))))
    {
        utility::string_t refVal_setMonth;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("month"))), refVal_setMonth );
        setMonth(refVal_setMonth);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("day_of_week"))))
    {
        utility::string_t refVal_setDayOfWeek;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("day_of_week"))), refVal_setDayOfWeek );
        setDayOfWeek(refVal_setDayOfWeek);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("specification"))))
    {
        utility::string_t refVal_setSpecification;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("specification"))), refVal_setSpecification );
        setSpecification(refVal_setSpecification);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("command"))))
    {
        utility::string_t refVal_setCommand;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("command"))), refVal_setCommand );
        setCommand(refVal_setCommand);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("line"))))
    {
        std::shared_ptr<V0_0_40_cron_entry_line> refVal_setLine;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("line"))), refVal_setLine );
        setLine(refVal_setLine);
    }
    return ok;
}

std::vector<utility::string_t>& V0_0_41_job_desc_msg_crontab::getFlags()
{
    return m_Flags;
}

void V0_0_41_job_desc_msg_crontab::setFlags(const std::vector<utility::string_t>& value)
{
    m_Flags = value;
    m_FlagsIsSet = true;
}

bool V0_0_41_job_desc_msg_crontab::flagsIsSet() const
{
    return m_FlagsIsSet;
}

void V0_0_41_job_desc_msg_crontab::unsetFlags()
{
    m_FlagsIsSet = false;
}
utility::string_t V0_0_41_job_desc_msg_crontab::getMinute() const
{
    return m_Minute;
}

void V0_0_41_job_desc_msg_crontab::setMinute(const utility::string_t& value)
{
    m_Minute = value;
    m_MinuteIsSet = true;
}

bool V0_0_41_job_desc_msg_crontab::minuteIsSet() const
{
    return m_MinuteIsSet;
}

void V0_0_41_job_desc_msg_crontab::unsetMinute()
{
    m_MinuteIsSet = false;
}
utility::string_t V0_0_41_job_desc_msg_crontab::getHour() const
{
    return m_Hour;
}

void V0_0_41_job_desc_msg_crontab::setHour(const utility::string_t& value)
{
    m_Hour = value;
    m_HourIsSet = true;
}

bool V0_0_41_job_desc_msg_crontab::hourIsSet() const
{
    return m_HourIsSet;
}

void V0_0_41_job_desc_msg_crontab::unsetHour()
{
    m_HourIsSet = false;
}
utility::string_t V0_0_41_job_desc_msg_crontab::getDayOfMonth() const
{
    return m_Day_of_month;
}

void V0_0_41_job_desc_msg_crontab::setDayOfMonth(const utility::string_t& value)
{
    m_Day_of_month = value;
    m_Day_of_monthIsSet = true;
}

bool V0_0_41_job_desc_msg_crontab::dayOfMonthIsSet() const
{
    return m_Day_of_monthIsSet;
}

void V0_0_41_job_desc_msg_crontab::unsetDay_of_month()
{
    m_Day_of_monthIsSet = false;
}
utility::string_t V0_0_41_job_desc_msg_crontab::getMonth() const
{
    return m_Month;
}

void V0_0_41_job_desc_msg_crontab::setMonth(const utility::string_t& value)
{
    m_Month = value;
    m_MonthIsSet = true;
}

bool V0_0_41_job_desc_msg_crontab::monthIsSet() const
{
    return m_MonthIsSet;
}

void V0_0_41_job_desc_msg_crontab::unsetMonth()
{
    m_MonthIsSet = false;
}
utility::string_t V0_0_41_job_desc_msg_crontab::getDayOfWeek() const
{
    return m_Day_of_week;
}

void V0_0_41_job_desc_msg_crontab::setDayOfWeek(const utility::string_t& value)
{
    m_Day_of_week = value;
    m_Day_of_weekIsSet = true;
}

bool V0_0_41_job_desc_msg_crontab::dayOfWeekIsSet() const
{
    return m_Day_of_weekIsSet;
}

void V0_0_41_job_desc_msg_crontab::unsetDay_of_week()
{
    m_Day_of_weekIsSet = false;
}
utility::string_t V0_0_41_job_desc_msg_crontab::getSpecification() const
{
    return m_Specification;
}

void V0_0_41_job_desc_msg_crontab::setSpecification(const utility::string_t& value)
{
    m_Specification = value;
    m_SpecificationIsSet = true;
}

bool V0_0_41_job_desc_msg_crontab::specificationIsSet() const
{
    return m_SpecificationIsSet;
}

void V0_0_41_job_desc_msg_crontab::unsetSpecification()
{
    m_SpecificationIsSet = false;
}
utility::string_t V0_0_41_job_desc_msg_crontab::getCommand() const
{
    return m_Command;
}

void V0_0_41_job_desc_msg_crontab::setCommand(const utility::string_t& value)
{
    m_Command = value;
    m_CommandIsSet = true;
}

bool V0_0_41_job_desc_msg_crontab::commandIsSet() const
{
    return m_CommandIsSet;
}

void V0_0_41_job_desc_msg_crontab::unsetCommand()
{
    m_CommandIsSet = false;
}
std::shared_ptr<V0_0_40_cron_entry_line> V0_0_41_job_desc_msg_crontab::getLine() const
{
    return m_Line;
}

void V0_0_41_job_desc_msg_crontab::setLine(const std::shared_ptr<V0_0_40_cron_entry_line>& value)
{
    m_Line = value;
    m_LineIsSet = true;
}

bool V0_0_41_job_desc_msg_crontab::lineIsSet() const
{
    return m_LineIsSet;
}

void V0_0_41_job_desc_msg_crontab::unsetLine()
{
    m_LineIsSet = false;
}
}
}
}
}

