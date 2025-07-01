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

#include "OAIVoiceStateResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIVoiceStateResponse::OAIVoiceStateResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVoiceStateResponse::OAIVoiceStateResponse() {
    this->initializeModel();
}

OAIVoiceStateResponse::~OAIVoiceStateResponse() {}

void OAIVoiceStateResponse::initializeModel() {

    m_deaf_isSet = false;
    m_deaf_isValid = false;

    m_mute_isSet = false;
    m_mute_isValid = false;

    m_suppress_isSet = false;
    m_suppress_isValid = false;

    m_self_deaf_isSet = false;
    m_self_deaf_isValid = false;

    m_self_mute_isSet = false;
    m_self_mute_isValid = false;

    m_self_video_isSet = false;
    m_self_video_isValid = false;

    m_session_id_isSet = false;
    m_session_id_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_member_isSet = false;
    m_member_isValid = false;

    m_request_to_speak_timestamp_isSet = false;
    m_request_to_speak_timestamp_isValid = false;

    m_self_stream_isSet = false;
    m_self_stream_isValid = false;
}

void OAIVoiceStateResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVoiceStateResponse::fromJsonObject(QJsonObject json) {

    m_deaf_isValid = ::dc_rest::fromJsonValue(m_deaf, json[QString("deaf")]);
    m_deaf_isSet = !json[QString("deaf")].isNull() && m_deaf_isValid;

    m_mute_isValid = ::dc_rest::fromJsonValue(m_mute, json[QString("mute")]);
    m_mute_isSet = !json[QString("mute")].isNull() && m_mute_isValid;

    m_suppress_isValid = ::dc_rest::fromJsonValue(m_suppress, json[QString("suppress")]);
    m_suppress_isSet = !json[QString("suppress")].isNull() && m_suppress_isValid;

    m_self_deaf_isValid = ::dc_rest::fromJsonValue(m_self_deaf, json[QString("self_deaf")]);
    m_self_deaf_isSet = !json[QString("self_deaf")].isNull() && m_self_deaf_isValid;

    m_self_mute_isValid = ::dc_rest::fromJsonValue(m_self_mute, json[QString("self_mute")]);
    m_self_mute_isSet = !json[QString("self_mute")].isNull() && m_self_mute_isValid;

    m_self_video_isValid = ::dc_rest::fromJsonValue(m_self_video, json[QString("self_video")]);
    m_self_video_isSet = !json[QString("self_video")].isNull() && m_self_video_isValid;

    m_session_id_isValid = ::dc_rest::fromJsonValue(m_session_id, json[QString("session_id")]);
    m_session_id_isSet = !json[QString("session_id")].isNull() && m_session_id_isValid;

    m_user_id_isValid = ::dc_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_member_isValid = ::dc_rest::fromJsonValue(m_member, json[QString("member")]);
    m_member_isSet = !json[QString("member")].isNull() && m_member_isValid;

    m_request_to_speak_timestamp_isValid = ::dc_rest::fromJsonValue(m_request_to_speak_timestamp, json[QString("request_to_speak_timestamp")]);
    m_request_to_speak_timestamp_isSet = !json[QString("request_to_speak_timestamp")].isNull() && m_request_to_speak_timestamp_isValid;

    m_self_stream_isValid = ::dc_rest::fromJsonValue(m_self_stream, json[QString("self_stream")]);
    m_self_stream_isSet = !json[QString("self_stream")].isNull() && m_self_stream_isValid;
}

QString OAIVoiceStateResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVoiceStateResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_deaf_isSet) {
        obj.insert(QString("deaf"), ::dc_rest::toJsonValue(m_deaf));
    }
    if (m_mute_isSet) {
        obj.insert(QString("mute"), ::dc_rest::toJsonValue(m_mute));
    }
    if (m_suppress_isSet) {
        obj.insert(QString("suppress"), ::dc_rest::toJsonValue(m_suppress));
    }
    if (m_self_deaf_isSet) {
        obj.insert(QString("self_deaf"), ::dc_rest::toJsonValue(m_self_deaf));
    }
    if (m_self_mute_isSet) {
        obj.insert(QString("self_mute"), ::dc_rest::toJsonValue(m_self_mute));
    }
    if (m_self_video_isSet) {
        obj.insert(QString("self_video"), ::dc_rest::toJsonValue(m_self_video));
    }
    if (m_session_id_isSet) {
        obj.insert(QString("session_id"), ::dc_rest::toJsonValue(m_session_id));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::dc_rest::toJsonValue(m_user_id));
    }
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_member.isSet()) {
        obj.insert(QString("member"), ::dc_rest::toJsonValue(m_member));
    }
    if (m_request_to_speak_timestamp_isSet) {
        obj.insert(QString("request_to_speak_timestamp"), ::dc_rest::toJsonValue(m_request_to_speak_timestamp));
    }
    if (m_self_stream_isSet) {
        obj.insert(QString("self_stream"), ::dc_rest::toJsonValue(m_self_stream));
    }
    return obj;
}

bool OAIVoiceStateResponse::isDeaf() const {
    return m_deaf;
}
void OAIVoiceStateResponse::setDeaf(const bool &deaf) {
    m_deaf = deaf;
    m_deaf_isSet = true;
}

bool OAIVoiceStateResponse::is_deaf_Set() const{
    return m_deaf_isSet;
}

bool OAIVoiceStateResponse::is_deaf_Valid() const{
    return m_deaf_isValid;
}

bool OAIVoiceStateResponse::isMute() const {
    return m_mute;
}
void OAIVoiceStateResponse::setMute(const bool &mute) {
    m_mute = mute;
    m_mute_isSet = true;
}

bool OAIVoiceStateResponse::is_mute_Set() const{
    return m_mute_isSet;
}

bool OAIVoiceStateResponse::is_mute_Valid() const{
    return m_mute_isValid;
}

bool OAIVoiceStateResponse::isSuppress() const {
    return m_suppress;
}
void OAIVoiceStateResponse::setSuppress(const bool &suppress) {
    m_suppress = suppress;
    m_suppress_isSet = true;
}

bool OAIVoiceStateResponse::is_suppress_Set() const{
    return m_suppress_isSet;
}

bool OAIVoiceStateResponse::is_suppress_Valid() const{
    return m_suppress_isValid;
}

bool OAIVoiceStateResponse::isSelfDeaf() const {
    return m_self_deaf;
}
void OAIVoiceStateResponse::setSelfDeaf(const bool &self_deaf) {
    m_self_deaf = self_deaf;
    m_self_deaf_isSet = true;
}

bool OAIVoiceStateResponse::is_self_deaf_Set() const{
    return m_self_deaf_isSet;
}

bool OAIVoiceStateResponse::is_self_deaf_Valid() const{
    return m_self_deaf_isValid;
}

bool OAIVoiceStateResponse::isSelfMute() const {
    return m_self_mute;
}
void OAIVoiceStateResponse::setSelfMute(const bool &self_mute) {
    m_self_mute = self_mute;
    m_self_mute_isSet = true;
}

bool OAIVoiceStateResponse::is_self_mute_Set() const{
    return m_self_mute_isSet;
}

bool OAIVoiceStateResponse::is_self_mute_Valid() const{
    return m_self_mute_isValid;
}

bool OAIVoiceStateResponse::isSelfVideo() const {
    return m_self_video;
}
void OAIVoiceStateResponse::setSelfVideo(const bool &self_video) {
    m_self_video = self_video;
    m_self_video_isSet = true;
}

bool OAIVoiceStateResponse::is_self_video_Set() const{
    return m_self_video_isSet;
}

bool OAIVoiceStateResponse::is_self_video_Valid() const{
    return m_self_video_isValid;
}

QString OAIVoiceStateResponse::getSessionId() const {
    return m_session_id;
}
void OAIVoiceStateResponse::setSessionId(const QString &session_id) {
    m_session_id = session_id;
    m_session_id_isSet = true;
}

bool OAIVoiceStateResponse::is_session_id_Set() const{
    return m_session_id_isSet;
}

bool OAIVoiceStateResponse::is_session_id_Valid() const{
    return m_session_id_isValid;
}

QString OAIVoiceStateResponse::getUserId() const {
    return m_user_id;
}
void OAIVoiceStateResponse::setUserId(const QString &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIVoiceStateResponse::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIVoiceStateResponse::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString OAIVoiceStateResponse::getChannelId() const {
    return m_channel_id;
}
void OAIVoiceStateResponse::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIVoiceStateResponse::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIVoiceStateResponse::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

QString OAIVoiceStateResponse::getGuildId() const {
    return m_guild_id;
}
void OAIVoiceStateResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIVoiceStateResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIVoiceStateResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

OAIGuildMemberResponse OAIVoiceStateResponse::getMember() const {
    return m_member;
}
void OAIVoiceStateResponse::setMember(const OAIGuildMemberResponse &member) {
    m_member = member;
    m_member_isSet = true;
}

bool OAIVoiceStateResponse::is_member_Set() const{
    return m_member_isSet;
}

bool OAIVoiceStateResponse::is_member_Valid() const{
    return m_member_isValid;
}

QDateTime OAIVoiceStateResponse::getRequestToSpeakTimestamp() const {
    return m_request_to_speak_timestamp;
}
void OAIVoiceStateResponse::setRequestToSpeakTimestamp(const QDateTime &request_to_speak_timestamp) {
    m_request_to_speak_timestamp = request_to_speak_timestamp;
    m_request_to_speak_timestamp_isSet = true;
}

bool OAIVoiceStateResponse::is_request_to_speak_timestamp_Set() const{
    return m_request_to_speak_timestamp_isSet;
}

bool OAIVoiceStateResponse::is_request_to_speak_timestamp_Valid() const{
    return m_request_to_speak_timestamp_isValid;
}

bool OAIVoiceStateResponse::isSelfStream() const {
    return m_self_stream;
}
void OAIVoiceStateResponse::setSelfStream(const bool &self_stream) {
    m_self_stream = self_stream;
    m_self_stream_isSet = true;
}

bool OAIVoiceStateResponse::is_self_stream_Set() const{
    return m_self_stream_isSet;
}

bool OAIVoiceStateResponse::is_self_stream_Valid() const{
    return m_self_stream_isValid;
}

bool OAIVoiceStateResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_deaf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mute_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_suppress_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_self_deaf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_self_mute_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_self_video_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_session_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_member.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_to_speak_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_self_stream_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVoiceStateResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_deaf_isValid && m_mute_isValid && m_suppress_isValid && m_self_deaf_isValid && m_self_mute_isValid && m_self_video_isValid && m_session_id_isValid && m_user_id_isValid && true;
}

} // namespace dc_rest
