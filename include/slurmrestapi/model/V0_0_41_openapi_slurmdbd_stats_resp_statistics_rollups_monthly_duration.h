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
 * V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration();
    virtual ~V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration members

    /// <summary>
    /// Total time spent doing monthly daily rollup (seconds)
    /// </summary>
    int64_t getLast() const;
    bool lastIsSet() const;
    void unsetLast();

    void setLast(int64_t value);

    /// <summary>
    /// Longest monthly rollup time (seconds)
    /// </summary>
    int64_t getMax() const;
    bool maxIsSet() const;
    void unsetMax();

    void setMax(int64_t value);

    /// <summary>
    /// Total time spent doing monthly rollups (seconds)
    /// </summary>
    int64_t getTime() const;
    bool timeIsSet() const;
    void unsetTime();

    void setTime(int64_t value);


protected:
    int64_t m_Last;
    bool m_LastIsSet;
    int64_t m_Max;
    bool m_MaxIsSet;
    int64_t m_Time;
    bool m_TimeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration_H_ */