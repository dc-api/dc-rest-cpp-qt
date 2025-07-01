/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIVoiceStateResponse.h
 *
 * 
 */

#ifndef OAIVoiceStateResponse_H
#define OAIVoiceStateResponse_H

#include <QJsonObject>

#include "OAIGuildMemberResponse.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIGuildMemberResponse;

class OAIVoiceStateResponse : public OAIObject {
public:
    OAIVoiceStateResponse();
    OAIVoiceStateResponse(QString json);
    ~OAIVoiceStateResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isDeaf() const;
    void setDeaf(const bool &deaf);
    bool is_deaf_Set() const;
    bool is_deaf_Valid() const;

    bool isMute() const;
    void setMute(const bool &mute);
    bool is_mute_Set() const;
    bool is_mute_Valid() const;

    bool isSuppress() const;
    void setSuppress(const bool &suppress);
    bool is_suppress_Set() const;
    bool is_suppress_Valid() const;

    bool isSelfDeaf() const;
    void setSelfDeaf(const bool &self_deaf);
    bool is_self_deaf_Set() const;
    bool is_self_deaf_Valid() const;

    bool isSelfMute() const;
    void setSelfMute(const bool &self_mute);
    bool is_self_mute_Set() const;
    bool is_self_mute_Valid() const;

    bool isSelfVideo() const;
    void setSelfVideo(const bool &self_video);
    bool is_self_video_Set() const;
    bool is_self_video_Valid() const;

    QString getSessionId() const;
    void setSessionId(const QString &session_id);
    bool is_session_id_Set() const;
    bool is_session_id_Valid() const;

    QString getUserId() const;
    void setUserId(const QString &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    QString getChannelId() const;
    void setChannelId(const QString &channel_id);
    bool is_channel_id_Set() const;
    bool is_channel_id_Valid() const;

    QString getGuildId() const;
    void setGuildId(const QString &guild_id);
    bool is_guild_id_Set() const;
    bool is_guild_id_Valid() const;

    OAIGuildMemberResponse getMember() const;
    void setMember(const OAIGuildMemberResponse &member);
    bool is_member_Set() const;
    bool is_member_Valid() const;

    QDateTime getRequestToSpeakTimestamp() const;
    void setRequestToSpeakTimestamp(const QDateTime &request_to_speak_timestamp);
    bool is_request_to_speak_timestamp_Set() const;
    bool is_request_to_speak_timestamp_Valid() const;

    bool isSelfStream() const;
    void setSelfStream(const bool &self_stream);
    bool is_self_stream_Set() const;
    bool is_self_stream_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_deaf;
    bool m_deaf_isSet;
    bool m_deaf_isValid;

    bool m_mute;
    bool m_mute_isSet;
    bool m_mute_isValid;

    bool m_suppress;
    bool m_suppress_isSet;
    bool m_suppress_isValid;

    bool m_self_deaf;
    bool m_self_deaf_isSet;
    bool m_self_deaf_isValid;

    bool m_self_mute;
    bool m_self_mute_isSet;
    bool m_self_mute_isValid;

    bool m_self_video;
    bool m_self_video_isSet;
    bool m_self_video_isValid;

    QString m_session_id;
    bool m_session_id_isSet;
    bool m_session_id_isValid;

    QString m_user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;

    QString m_channel_id;
    bool m_channel_id_isSet;
    bool m_channel_id_isValid;

    QString m_guild_id;
    bool m_guild_id_isSet;
    bool m_guild_id_isValid;

    OAIGuildMemberResponse m_member;
    bool m_member_isSet;
    bool m_member_isValid;

    QDateTime m_request_to_speak_timestamp;
    bool m_request_to_speak_timestamp_isSet;
    bool m_request_to_speak_timestamp_isValid;

    bool m_self_stream;
    bool m_self_stream_isSet;
    bool m_self_stream_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIVoiceStateResponse)

#endif // OAIVoiceStateResponse_H
