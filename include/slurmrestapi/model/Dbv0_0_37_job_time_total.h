/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_37_job_time_total.h
 *
 * System time values
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_time_total_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_time_total_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// System time values
/// </summary>
class  Dbv0_0_37_job_time_total
    : public ModelBase
{
public:
    Dbv0_0_37_job_time_total();
    virtual ~Dbv0_0_37_job_time_total();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_37_job_time_total members

    /// <summary>
    /// Total number of CPU-seconds used by the job, in seconds
    /// </summary>
    int32_t getSeconds() const;
    bool secondsIsSet() const;
    void unsetSeconds();

    void setSeconds(int32_t value);

    /// <summary>
    /// Total number of CPU-seconds used by the job, in microseconds
    /// </summary>
    int32_t getMicroseconds() const;
    bool microsecondsIsSet() const;
    void unsetMicroseconds();

    void setMicroseconds(int32_t value);


protected:
    int32_t m_Seconds;
    bool m_SecondsIsSet;
    int32_t m_Microseconds;
    bool m_MicrosecondsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_time_total_H_ */
