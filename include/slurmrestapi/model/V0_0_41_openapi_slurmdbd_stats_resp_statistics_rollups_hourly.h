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
 * V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly();
    virtual ~V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly members

    /// <summary>
    /// Number of hourly rollups since last_run
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);

    /// <summary>
    /// Last time hourly rollup ran (UNIX timestamp)
    /// </summary>
    int64_t getLastRun() const;
    bool lastRunIsSet() const;
    void unsetLast_run();

    void setLastRun(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration> getDuration() const;
    bool durationIsSet() const;
    void unsetDuration();

    void setDuration(const std::shared_ptr<V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration>& value);


protected:
    int32_t m_Count;
    bool m_CountIsSet;
    int64_t m_Last_run;
    bool m_Last_runIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration> m_Duration;
    bool m_DurationIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_H_ */
